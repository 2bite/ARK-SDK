// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LionfishLionHUD_Interface_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LionfishLionHUD_Interface.LionfishLionHUD_Interface_C.GetHudData
// ()
// Parameters:
// float                          AttackComboPercent             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          MaxComboFlashingSpeed          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// double                         LastUncloakTime                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          CloakCooldown                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsFemale                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsCamoActive                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// double                         LastRoarBuffTime               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          RoarBuffCooldown               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           HasMateBoost                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// double                         LastTimeReleasedTeleport       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          TeleportCooldown               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          TeleportPercent                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsCurrentlyChargingTeleport    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class APrimalCharacter*        LatestQuickteleportTarget      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          LeapCooldown                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// double                         LastLeapTime                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          LeapPercent                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULionfishLionHUD_Interface_C::GetHudData(float* AttackComboPercent, float* MaxComboFlashingSpeed, double* LastUncloakTime, float* CloakCooldown, bool* IsFemale, bool* IsCamoActive, double* LastRoarBuffTime, float* RoarBuffCooldown, bool* HasMateBoost, double* LastTimeReleasedTeleport, float* TeleportCooldown, float* TeleportPercent, bool* IsCurrentlyChargingTeleport, class APrimalCharacter** LatestQuickteleportTarget, float* LeapCooldown, double* LastLeapTime, float* LeapPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function LionfishLionHUD_Interface.LionfishLionHUD_Interface_C.GetHudData");

	ULionfishLionHUD_Interface_C_GetHudData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AttackComboPercent != nullptr)
		*AttackComboPercent = params.AttackComboPercent;
	if (MaxComboFlashingSpeed != nullptr)
		*MaxComboFlashingSpeed = params.MaxComboFlashingSpeed;
	if (LastUncloakTime != nullptr)
		*LastUncloakTime = params.LastUncloakTime;
	if (CloakCooldown != nullptr)
		*CloakCooldown = params.CloakCooldown;
	if (IsFemale != nullptr)
		*IsFemale = params.IsFemale;
	if (IsCamoActive != nullptr)
		*IsCamoActive = params.IsCamoActive;
	if (LastRoarBuffTime != nullptr)
		*LastRoarBuffTime = params.LastRoarBuffTime;
	if (RoarBuffCooldown != nullptr)
		*RoarBuffCooldown = params.RoarBuffCooldown;
	if (HasMateBoost != nullptr)
		*HasMateBoost = params.HasMateBoost;
	if (LastTimeReleasedTeleport != nullptr)
		*LastTimeReleasedTeleport = params.LastTimeReleasedTeleport;
	if (TeleportCooldown != nullptr)
		*TeleportCooldown = params.TeleportCooldown;
	if (TeleportPercent != nullptr)
		*TeleportPercent = params.TeleportPercent;
	if (IsCurrentlyChargingTeleport != nullptr)
		*IsCurrentlyChargingTeleport = params.IsCurrentlyChargingTeleport;
	if (LatestQuickteleportTarget != nullptr)
		*LatestQuickteleportTarget = params.LatestQuickteleportTarget;
	if (LeapCooldown != nullptr)
		*LeapCooldown = params.LeapCooldown;
	if (LastLeapTime != nullptr)
		*LastLeapTime = params.LastLeapTime;
	if (LeapPercent != nullptr)
		*LeapPercent = params.LeapPercent;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

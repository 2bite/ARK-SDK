#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LionfishLionHUD_Interface_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LionfishLionHUD_Interface.LionfishLionHUD_Interface_C
// 0x0000 (0x0028 - 0x0028)
class ULionfishLionHUD_Interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LionfishLionHUD_Interface.LionfishLionHUD_Interface_C");
		return ptr;
	}


	void GetHudData(float* AttackComboPercent, float* MaxComboFlashingSpeed, double* LastUncloakTime, float* CloakCooldown, bool* IsFemale, bool* IsCamoActive, double* LastRoarBuffTime, float* RoarBuffCooldown, bool* HasMateBoost, double* LastTimeReleasedTeleport, float* TeleportCooldown, float* TeleportPercent, bool* IsCurrentlyChargingTeleport, class APrimalCharacter** LatestQuickteleportTarget, float* LeapCooldown, double* LastLeapTime, float* LeapPercent);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SpaceDolphinHUD_Interface_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SpaceDolphinHUD_Interface.SpaceDolphinHUD_Interface_C
// 0x0000 (0x0028 - 0x0028)
class USpaceDolphinHUD_Interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SpaceDolphinHUD_Interface.SpaceDolphinHUD_Interface_C");
		return ptr;
	}


	void GetHudData(bool* HasSaddle, bool* isFPV, bool* HideHUDinFPV, int* LaserLevel, int* MaxLaserLevel, float* LaserDowngradeTime, float* LaserDowngradeTimerRemaining, bool* IsLaserDowngradeTimerActive, double* LastLaserLevelChangedTime, class UPrimalInventoryComponent** InventoryComponent, class UClass** SaddleFuelItem, class UClass** FlakCannonAmmoItem, bool* IsUsingSuperFlight, bool* IsUsingSuperFlightBoost, float* FuelPercent, float* CannonCooldownPercent, float* EchoOrChaffCooldownPercent, bool* IsSubmerged);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

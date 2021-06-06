#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TropeHUD_Interface_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TropeHUD_Interface.TropeHUD_Interface_C
// 0x0000 (0x0028 - 0x0028)
class UTropeHUD_Interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TropeHUD_Interface.TropeHUD_Interface_C");
		return ptr;
	}


	void GetHudData(bool* HasSaddle, class UPrimalInventoryComponent** InventoryComponent, class UClass** SaddleFuelItem, class UClass** FlakCannonAmmoItem, bool* IsUsingSuperFlight, bool* IsUsingSuperFlightBoost, float* FuelPercent, float* CannonCooldownPercent, float* SpeedPercent);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

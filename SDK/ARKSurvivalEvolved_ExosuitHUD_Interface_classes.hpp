#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ExosuitHUD_Interface_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ExosuitHUD_Interface.ExosuitHUD_Interface_C
// 0x0000 (0x0028 - 0x0028)
class UExosuitHUD_Interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ExosuitHUD_Interface.ExosuitHUD_Interface_C");
		return ptr;
	}


	void GetHudData(bool* bUsesChestBeam, bool* bCanUseChestBeam, float* ChestBeamEnergyPercent, int* ChestBeamState, class UPrimalInventoryComponent** InventoryComponent, class UClass** FuelItem, float* EnergyPercent, int* CurrentMode, bool* bIsPreparingJump);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

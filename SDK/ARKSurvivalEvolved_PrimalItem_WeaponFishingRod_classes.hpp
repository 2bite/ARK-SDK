#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponFishingRod_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_WeaponFishingRod.PrimalItem_WeaponFishingRod_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItem_WeaponFishingRod_C : public UPrimalItemWeaponGenericGun_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_WeaponFishingRod.PrimalItem_WeaponFishingRod_C");
		return ptr;
	}


	bool BPCanUse(bool* bIgnoreCooldown);
	void ExecuteUbergraph_PrimalItem_WeaponFishingRod(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

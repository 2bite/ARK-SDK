#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponLance_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_WeaponLance.PrimalItem_WeaponLance_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItem_WeaponLance_C : public UPrimalItemWeaponGenericAmmoless_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_WeaponLance.PrimalItem_WeaponLance_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_WeaponLance(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

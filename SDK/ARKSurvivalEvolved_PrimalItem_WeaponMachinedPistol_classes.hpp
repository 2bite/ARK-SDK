#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponMachinedPistol_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_WeaponMachinedPistol.PrimalItem_WeaponMachinedPistol_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItem_WeaponMachinedPistol_C : public UPrimalItemWeaponGenericGun_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_WeaponMachinedPistol.PrimalItem_WeaponMachinedPistol_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_WeaponMachinedPistol(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

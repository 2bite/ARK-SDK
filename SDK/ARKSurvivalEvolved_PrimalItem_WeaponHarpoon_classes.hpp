#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponHarpoon_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_WeaponHarpoon.PrimalItem_WeaponHarpoon_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItem_WeaponHarpoon_C : public UPrimalItemWeaponGenericGun_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_WeaponHarpoon.PrimalItem_WeaponHarpoon_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_WeaponHarpoon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

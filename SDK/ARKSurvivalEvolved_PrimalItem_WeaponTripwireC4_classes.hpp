#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponTripwireC4_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_WeaponTripwireC4.PrimalItem_WeaponTripwireC4_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItem_WeaponTripwireC4_C : public UPrimalItemWeaponGenericAmmolessConsumeSelf_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_WeaponTripwireC4.PrimalItem_WeaponTripwireC4_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_WeaponTripwireC4(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

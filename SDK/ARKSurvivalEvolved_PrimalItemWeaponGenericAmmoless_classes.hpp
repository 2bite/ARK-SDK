#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemWeaponGenericAmmoless_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemWeaponGenericAmmoless.PrimalItemWeaponGenericAmmoless_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItemWeaponGenericAmmoless_C : public UPrimalItemWeaponGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemWeaponGenericAmmoless.PrimalItemWeaponGenericAmmoless_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemWeaponGenericAmmoless(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponOilJar_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_WeaponOilJar.PrimalItem_WeaponOilJar_C
// 0x0000 (0x09E8 - 0x09E8)
class UPrimalItem_WeaponOilJar_C : public UPrimalItemWeaponGenericAmmolessConsumeSelf_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_WeaponOilJar.PrimalItem_WeaponOilJar_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_WeaponOilJar(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

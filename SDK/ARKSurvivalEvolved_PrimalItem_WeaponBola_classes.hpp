#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponBola_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_WeaponBola.PrimalItem_WeaponBola_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItem_WeaponBola_C : public UPrimalItemWeaponGenericAmmolessConsumeSelf_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_WeaponBola.PrimalItem_WeaponBola_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_WeaponBola(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
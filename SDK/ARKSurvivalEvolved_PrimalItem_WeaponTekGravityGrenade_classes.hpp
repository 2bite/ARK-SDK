#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponTekGravityGrenade_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_WeaponTekGravityGrenade.PrimalItem_WeaponTekGravityGrenade_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItem_WeaponTekGravityGrenade_C : public UPrimalItemWeaponGenericAmmolessConsumeSelf_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_WeaponTekGravityGrenade.PrimalItem_WeaponTekGravityGrenade_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_WeaponTekGravityGrenade(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

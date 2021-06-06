#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponBaseClub_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_WeaponBaseClub.PrimalItem_WeaponBaseClub_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItem_WeaponBaseClub_C : public UPrimalItemWeaponGenericAmmoless_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_WeaponBaseClub.PrimalItem_WeaponBaseClub_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_WeaponBaseClub(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

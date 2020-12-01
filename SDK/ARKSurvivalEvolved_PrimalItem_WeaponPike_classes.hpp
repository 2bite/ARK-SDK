#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponPike_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_WeaponPike.PrimalItem_WeaponPike_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItem_WeaponPike_C : public UPrimalItemWeaponGenericAmmoless_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_WeaponPike.PrimalItem_WeaponPike_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_WeaponPike(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemWeaponGenericGun_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemWeaponGenericGun.PrimalItemWeaponGenericGun_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemWeaponGenericGun_C : public UPrimalItemWeaponGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemWeaponGenericGun.PrimalItemWeaponGenericGun_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemWeaponGenericGun(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
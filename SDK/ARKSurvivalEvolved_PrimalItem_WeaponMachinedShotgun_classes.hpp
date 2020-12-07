#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponMachinedShotgun_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_WeaponMachinedShotgun.PrimalItem_WeaponMachinedShotgun_C
// 0x0000 (0x09E8 - 0x09E8)
class UPrimalItem_WeaponMachinedShotgun_C : public UPrimalItemWeaponGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_WeaponMachinedShotgun.PrimalItem_WeaponMachinedShotgun_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_WeaponMachinedShotgun(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

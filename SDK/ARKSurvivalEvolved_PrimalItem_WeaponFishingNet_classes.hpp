#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponFishingNet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_WeaponFishingNet.PrimalItem_WeaponFishingNet_C
// 0x0000 (0x09E8 - 0x09E8)
class UPrimalItem_WeaponFishingNet_C : public UPrimalItemWeaponGenericAmmolessConsumeSelf_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_WeaponFishingNet.PrimalItem_WeaponFishingNet_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_WeaponFishingNet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
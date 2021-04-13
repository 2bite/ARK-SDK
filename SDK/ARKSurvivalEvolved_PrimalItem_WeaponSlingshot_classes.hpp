#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponSlingshot_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_WeaponSlingshot.PrimalItem_WeaponSlingshot_C
// 0x0000 (0x0A00 - 0x0A00)
class UPrimalItem_WeaponSlingshot_C : public UPrimalItemWeaponGenericGun_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_WeaponSlingshot.PrimalItem_WeaponSlingshot_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_WeaponSlingshot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

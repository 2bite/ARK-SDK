#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponCompoundBow_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_WeaponCompoundBow.PrimalItem_WeaponCompoundBow_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItem_WeaponCompoundBow_C : public UPrimalItemWeaponGenericGun_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_WeaponCompoundBow.PrimalItem_WeaponCompoundBow_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_WeaponCompoundBow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponClimbPick_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_WeaponClimbPick.PrimalItem_WeaponClimbPick_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItem_WeaponClimbPick_C : public UPrimalItemWeaponGenericAmmoless_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_WeaponClimbPick.PrimalItem_WeaponClimbPick_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_WeaponClimbPick(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

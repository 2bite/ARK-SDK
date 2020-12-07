#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemWeaponGenericNoStats_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemWeaponGenericNoStats.PrimalItemWeaponGenericNoStats_C
// 0x0000 (0x09E8 - 0x09E8)
class UPrimalItemWeaponGenericNoStats_C : public UPrimalItemWeaponGenericAmmoless_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemWeaponGenericNoStats.PrimalItemWeaponGenericNoStats_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemWeaponGenericNoStats(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

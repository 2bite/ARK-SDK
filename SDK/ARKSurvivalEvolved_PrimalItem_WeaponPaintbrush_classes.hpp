#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponPaintbrush_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_WeaponPaintbrush.PrimalItem_WeaponPaintbrush_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItem_WeaponPaintbrush_C : public UPrimalItemWeaponGenericNoStats_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_WeaponPaintbrush.PrimalItem_WeaponPaintbrush_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_WeaponPaintbrush(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

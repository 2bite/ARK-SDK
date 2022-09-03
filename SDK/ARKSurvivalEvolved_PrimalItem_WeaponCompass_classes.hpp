#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponCompass_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_WeaponCompass.PrimalItem_WeaponCompass_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItem_WeaponCompass_C : public UPrimalItemWeaponGenericNoStats_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_WeaponCompass.PrimalItem_WeaponCompass_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_WeaponCompass(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

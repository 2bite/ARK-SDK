#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponWhip_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_WeaponWhip.PrimalItem_WeaponWhip_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItem_WeaponWhip_C : public UPrimalItem_WeaponBaseClub_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_WeaponWhip.PrimalItem_WeaponWhip_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_WeaponWhip(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

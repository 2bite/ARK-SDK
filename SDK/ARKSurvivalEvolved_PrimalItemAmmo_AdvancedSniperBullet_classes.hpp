#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemAmmo_AdvancedSniperBullet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemAmmo_AdvancedSniperBullet.PrimalItemAmmo_AdvancedSniperBullet_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItemAmmo_AdvancedSniperBullet_C : public UPrimalItemAmmo_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemAmmo_AdvancedSniperBullet.PrimalItemAmmo_AdvancedSniperBullet_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemAmmo_AdvancedSniperBullet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

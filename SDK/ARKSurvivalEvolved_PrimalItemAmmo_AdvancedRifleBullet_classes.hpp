#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemAmmo_AdvancedRifleBullet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemAmmo_AdvancedRifleBullet.PrimalItemAmmo_AdvancedRifleBullet_C
// 0x0000 (0x09E8 - 0x09E8)
class UPrimalItemAmmo_AdvancedRifleBullet_C : public UPrimalItemAmmo_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemAmmo_AdvancedRifleBullet.PrimalItemAmmo_AdvancedRifleBullet_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemAmmo_AdvancedRifleBullet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

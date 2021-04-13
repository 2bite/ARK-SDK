#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemAmmo_RocketHomingMissile_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemAmmo_RocketHomingMissile.PrimalItemAmmo_RocketHomingMissile_C
// 0x0000 (0x0A00 - 0x0A00)
class UPrimalItemAmmo_RocketHomingMissile_C : public UPrimalItemAmmo_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemAmmo_RocketHomingMissile.PrimalItemAmmo_RocketHomingMissile_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemAmmo_RocketHomingMissile(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

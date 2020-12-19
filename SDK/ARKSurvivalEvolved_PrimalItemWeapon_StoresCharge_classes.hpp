#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemWeapon_StoresCharge_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemWeapon_StoresCharge.PrimalItemWeapon_StoresCharge_C
// 0x0000 (0x09F0 - 0x09F0)
class UPrimalItemWeapon_StoresCharge_C : public UPrimalItemWeaponGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemWeapon_StoresCharge.PrimalItemWeapon_StoresCharge_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemWeapon_StoresCharge(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponScissors_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_WeaponScissors.PrimalItem_WeaponScissors_C
// 0x0000 (0x0A00 - 0x0A00)
class UPrimalItem_WeaponScissors_C : public UPrimalItemWeaponGenericNoStats_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_WeaponScissors.PrimalItem_WeaponScissors_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_WeaponScissors(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponSickle_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_WeaponSickle.PrimalItem_WeaponSickle_C
// 0x0000 (0x09E8 - 0x09E8)
class UPrimalItem_WeaponSickle_C : public UPrimalItem_WeaponBaseHatchet_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_WeaponSickle.PrimalItem_WeaponSickle_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_WeaponSickle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

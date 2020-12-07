#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_TekRifle_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_TekRifle.PrimalItem_TekRifle_C
// 0x0000 (0x09E8 - 0x09E8)
class UPrimalItem_TekRifle_C : public UPrimalItemWeaponGenericGun_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_TekRifle.PrimalItem_TekRifle_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_TekRifle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

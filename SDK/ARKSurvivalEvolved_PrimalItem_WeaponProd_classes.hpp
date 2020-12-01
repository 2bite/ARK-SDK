#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponProd_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_WeaponProd.PrimalItem_WeaponProd_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItem_WeaponProd_C : public UPrimalItem_WeaponBaseClub_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_WeaponProd.PrimalItem_WeaponProd_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_WeaponProd(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

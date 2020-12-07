#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponStoneClub_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_WeaponStoneClub.PrimalItem_WeaponStoneClub_C
// 0x0000 (0x09E8 - 0x09E8)
class UPrimalItem_WeaponStoneClub_C : public UPrimalItem_WeaponBaseClub_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_WeaponStoneClub.PrimalItem_WeaponStoneClub_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_WeaponStoneClub(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

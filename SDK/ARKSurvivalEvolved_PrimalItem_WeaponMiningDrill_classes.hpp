#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponMiningDrill_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_WeaponMiningDrill.PrimalItem_WeaponMiningDrill_C
// 0x0000 (0x09F0 - 0x09F0)
class UPrimalItem_WeaponMiningDrill_C : public UPrimalItem_WeaponBaseClub_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_WeaponMiningDrill.PrimalItem_WeaponMiningDrill_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_WeaponMiningDrill(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

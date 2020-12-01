#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_WeaponScoutRemote_CityTerminal_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_WeaponScoutRemote_CityTerminal.PrimalItem_WeaponScoutRemote_CityTerminal_C
// 0x0000 (0x09D0 - 0x09D0)
class UPrimalItem_WeaponScoutRemote_CityTerminal_C : public UPrimalItem_WeaponScoutRemote_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_WeaponScoutRemote_CityTerminal.PrimalItem_WeaponScoutRemote_CityTerminal_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_WeaponScoutRemote_CityTerminal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

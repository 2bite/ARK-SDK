#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemTrophy_RockwellGen2_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemTrophy_RockwellGen2.PrimalItemTrophy_RockwellGen2_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItemTrophy_RockwellGen2_C : public UPrimalItemTrophyGenericWall_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemTrophy_RockwellGen2.PrimalItemTrophy_RockwellGen2_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemTrophy_RockwellGen2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemTrophy_RockwellGen2_Alpha_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemTrophy_RockwellGen2_Alpha.PrimalItemTrophy_RockwellGen2_Alpha_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItemTrophy_RockwellGen2_Alpha_C : public UPrimalItemTrophy_RockwellGen2_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemTrophy_RockwellGen2_Alpha.PrimalItemTrophy_RockwellGen2_Alpha_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemTrophy_RockwellGen2_Alpha(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

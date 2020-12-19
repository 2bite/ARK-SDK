#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemTrophy_AlphaWorm_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemTrophy_AlphaWorm.PrimalItemTrophy_AlphaWorm_C
// 0x0000 (0x09F0 - 0x09F0)
class UPrimalItemTrophy_AlphaWorm_C : public UPrimalItemTrophyGenericWall_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemTrophy_AlphaWorm.PrimalItemTrophy_AlphaWorm_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemTrophy_AlphaWorm(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

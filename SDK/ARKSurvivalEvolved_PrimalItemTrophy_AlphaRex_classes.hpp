#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemTrophy_AlphaRex_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemTrophy_AlphaRex.PrimalItemTrophy_AlphaRex_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItemTrophy_AlphaRex_C : public UPrimalItemTrophyGenericWall_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemTrophy_AlphaRex.PrimalItemTrophy_AlphaRex_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemTrophy_AlphaRex(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemTrophy_SotFUS_3rd_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemTrophy_SotFUS_3rd.PrimalItemTrophy_SotFUS_3rd_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemTrophy_SotFUS_3rd_C : public UPrimalItemTrophyGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemTrophy_SotFUS_3rd.PrimalItemTrophy_SotFUS_3rd_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemTrophy_SotFUS_3rd(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

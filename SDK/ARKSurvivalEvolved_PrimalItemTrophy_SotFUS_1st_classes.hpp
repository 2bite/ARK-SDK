#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemTrophy_SotFUS_1st_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemTrophy_SotFUS_1st.PrimalItemTrophy_SotFUS_1st_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemTrophy_SotFUS_1st_C : public UPrimalItemTrophyGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemTrophy_SotFUS_1st.PrimalItemTrophy_SotFUS_1st_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemTrophy_SotFUS_1st(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

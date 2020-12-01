#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemTrophy_SotF_1st_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemTrophy_SotF_1st.PrimalItemTrophy_SotF_1st_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemTrophy_SotF_1st_C : public UPrimalItemTrophyGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemTrophy_SotF_1st.PrimalItemTrophy_SotF_1st_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemTrophy_SotF_1st(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

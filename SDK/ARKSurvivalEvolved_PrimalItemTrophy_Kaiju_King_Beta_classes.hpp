#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemTrophy_Kaiju_King_Beta_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemTrophy_Kaiju_King_Beta.PrimalItemTrophy_Kaiju_King_Beta_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemTrophy_Kaiju_King_Beta_C : public UPrimalItemTrophy_Kaiju_King_Gamma_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemTrophy_Kaiju_King_Beta.PrimalItemTrophy_Kaiju_King_Beta_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemTrophy_Kaiju_King_Beta(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
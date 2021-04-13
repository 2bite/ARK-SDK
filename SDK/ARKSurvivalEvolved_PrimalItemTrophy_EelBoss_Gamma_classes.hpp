#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemTrophy_EelBoss_Gamma_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemTrophy_EelBoss_Gamma.PrimalItemTrophy_EelBoss_Gamma_C
// 0x0000 (0x0A00 - 0x0A00)
class UPrimalItemTrophy_EelBoss_Gamma_C : public UPrimalItemTrophy_EelBoss_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemTrophy_EelBoss_Gamma.PrimalItemTrophy_EelBoss_Gamma_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemTrophy_EelBoss_Gamma(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

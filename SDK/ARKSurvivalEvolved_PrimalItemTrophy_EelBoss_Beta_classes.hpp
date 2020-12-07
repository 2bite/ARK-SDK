#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemTrophy_EelBoss_Beta_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemTrophy_EelBoss_Beta.PrimalItemTrophy_EelBoss_Beta_C
// 0x0000 (0x09E8 - 0x09E8)
class UPrimalItemTrophy_EelBoss_Beta_C : public UPrimalItemTrophy_EelBoss_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemTrophy_EelBoss_Beta.PrimalItemTrophy_EelBoss_Beta_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemTrophy_EelBoss_Beta(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

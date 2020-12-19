#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemTrophy_Broodmother_Alpha_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemTrophy_Broodmother_Alpha.PrimalItemTrophy_Broodmother_Alpha_C
// 0x0000 (0x09F0 - 0x09F0)
class UPrimalItemTrophy_Broodmother_Alpha_C : public UPrimalItemTrophy_Broodmother_Beta_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemTrophy_Broodmother_Alpha.PrimalItemTrophy_Broodmother_Alpha_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemTrophy_Broodmother_Alpha(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

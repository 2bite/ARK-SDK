#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemTrophy_Rockwell_Beta_Alpha_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemTrophy_Rockwell_Beta_Alpha.PrimalItemTrophy_Rockwell_Beta_Alpha_C
// 0x0000 (0x09E8 - 0x09E8)
class UPrimalItemTrophy_Rockwell_Beta_Alpha_C : public UPrimalItemTrophy_Rockwell_Beta_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemTrophy_Rockwell_Beta_Alpha.PrimalItemTrophy_Rockwell_Beta_Alpha_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemTrophy_Rockwell_Beta_Alpha(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

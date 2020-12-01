#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemTrophy_Kaiju_Forest_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemTrophy_Kaiju_Forest.PrimalItemTrophy_Kaiju_Forest_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemTrophy_Kaiju_Forest_C : public UPrimalItemTrophy_Broodmother_Gamma_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemTrophy_Kaiju_Forest.PrimalItemTrophy_Kaiju_Forest_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemTrophy_Kaiju_Forest(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

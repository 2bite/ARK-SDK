#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemTrophy_Gorilla_Gamma_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemTrophy_Gorilla_Gamma.PrimalItemTrophy_Gorilla_Gamma_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemTrophy_Gorilla_Gamma_C : public UPrimalItemTrophy_Gorilla_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemTrophy_Gorilla_Gamma.PrimalItemTrophy_Gorilla_Gamma_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemTrophy_Gorilla_Gamma(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

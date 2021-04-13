#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemTrophy_Gorilla_Beta_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemTrophy_Gorilla_Beta.PrimalItemTrophy_Gorilla_Beta_C
// 0x0000 (0x0A00 - 0x0A00)
class UPrimalItemTrophy_Gorilla_Beta_C : public UPrimalItemTrophy_Gorilla_Gamma_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemTrophy_Gorilla_Beta.PrimalItemTrophy_Gorilla_Beta_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemTrophy_Gorilla_Beta(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

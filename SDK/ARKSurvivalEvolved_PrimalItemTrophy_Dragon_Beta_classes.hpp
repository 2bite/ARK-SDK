#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemTrophy_Dragon_Beta_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemTrophy_Dragon_Beta.PrimalItemTrophy_Dragon_Beta_C
// 0x0000 (0x09F0 - 0x09F0)
class UPrimalItemTrophy_Dragon_Beta_C : public UPrimalItemTrophy_Dragon_Gamma_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemTrophy_Dragon_Beta.PrimalItemTrophy_Dragon_Beta_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemTrophy_Dragon_Beta(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

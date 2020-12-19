#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemTrophy_Dragon_Gamma_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemTrophy_Dragon_Gamma.PrimalItemTrophy_Dragon_Gamma_C
// 0x0000 (0x09F0 - 0x09F0)
class UPrimalItemTrophy_Dragon_Gamma_C : public UPrimalItemTrophy_Dragon_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemTrophy_Dragon_Gamma.PrimalItemTrophy_Dragon_Gamma_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemTrophy_Dragon_Gamma(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

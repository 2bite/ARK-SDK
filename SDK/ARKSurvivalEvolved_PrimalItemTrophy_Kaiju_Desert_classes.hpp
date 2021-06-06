#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemTrophy_Kaiju_Desert_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemTrophy_Kaiju_Desert.PrimalItemTrophy_Kaiju_Desert_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItemTrophy_Kaiju_Desert_C : public UPrimalItemTrophy_Broodmother_Gamma_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemTrophy_Kaiju_Desert.PrimalItemTrophy_Kaiju_Desert_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemTrophy_Kaiju_Desert(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

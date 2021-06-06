#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemTrophy_Gorilla_Alpha_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemTrophy_Gorilla_Alpha.PrimalItemTrophy_Gorilla_Alpha_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItemTrophy_Gorilla_Alpha_C : public UPrimalItemTrophy_Gorilla_Beta_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemTrophy_Gorilla_Alpha.PrimalItemTrophy_Gorilla_Alpha_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemTrophy_Gorilla_Alpha(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

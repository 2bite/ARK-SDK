#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemTrophy_Gorilla_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemTrophy_Gorilla.PrimalItemTrophy_Gorilla_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItemTrophy_Gorilla_C : public UPrimalItemTrophyGenericWall_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemTrophy_Gorilla.PrimalItemTrophy_Gorilla_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemTrophy_Gorilla(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

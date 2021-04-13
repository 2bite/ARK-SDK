#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemTrophy_Broodmother_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemTrophy_Broodmother.PrimalItemTrophy_Broodmother_C
// 0x0000 (0x0A00 - 0x0A00)
class UPrimalItemTrophy_Broodmother_C : public UPrimalItemTrophyGenericWall_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemTrophy_Broodmother.PrimalItemTrophy_Broodmother_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemTrophy_Broodmother(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

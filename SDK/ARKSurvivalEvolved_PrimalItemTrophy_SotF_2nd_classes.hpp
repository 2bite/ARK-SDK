#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemTrophy_SotF_2nd_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemTrophy_SotF_2nd.PrimalItemTrophy_SotF_2nd_C
// 0x0000 (0x09E8 - 0x09E8)
class UPrimalItemTrophy_SotF_2nd_C : public UPrimalItemTrophyGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemTrophy_SotF_2nd.PrimalItemTrophy_SotF_2nd_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemTrophy_SotF_2nd(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

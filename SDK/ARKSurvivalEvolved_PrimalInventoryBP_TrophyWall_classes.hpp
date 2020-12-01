#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_TrophyWall_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalInventoryBP_TrophyWall.PrimalInventoryBP_TrophyWall_C
// 0x0000 (0x0538 - 0x0538)
class UPrimalInventoryBP_TrophyWall_C : public UPrimalInventoryComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_TrophyWall.PrimalInventoryBP_TrophyWall_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalInventoryBP_TrophyWall(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
